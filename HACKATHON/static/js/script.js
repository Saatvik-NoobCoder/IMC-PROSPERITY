async function getPrediction() {
    const present = document.getElementById('present').value;
    const past = document.getElementById('past').value;
    const med = document.getElementById('med').value;
    const allergy = document.getElementById('allergy').value;

    try {
        const response = await fetch('http://127.0.0.1:5000/predict', {
            method: 'POST',
            headers: {'Content-Type': 'application/json'},
            body: JSON.stringify({present, past, med, allergy})
        });

        const result = await response.json();

        const goodFoodsList = document.getElementById('goodFoods');
        const badFoodsList = document.getElementById('badFoods');

        // Clear previous results
        goodFoodsList.innerHTML = '';
        badFoodsList.innerHTML = '';

        // Populate good foods
        result.good_foods.forEach(food => {
            const li = document.createElement('li');
            li.textContent = food;
            li.classList.add('good');
            goodFoodsList.appendChild(li);
        });

        // Populate bad foods
        result.bad_foods.forEach(food => {
            const li = document.createElement('li');
            li.textContent = food;
            li.classList.add('bad');
            badFoodsList.appendChild(li);
        });

        document.getElementById('result').classList.remove('hidden');

    } catch (error) {
        console.error("Error:", error);
        alert("⚠️ Error connecting to server");
    }
}

const form = document.getElementById('foodForm');
const resultCard = document.getElementById('result');
const goodFoods = document.getElementById('goodFoods');
const badFoods = document.getElementById('badFoods');

form.addEventListener('submit', async (e) => {
    e.preventDefault();

    // Clear previous results
    goodFoods.innerHTML = '';
    badFoods.innerHTML = '';

    const data = {
        present: document.getElementById('present').value,
        past: document.getElementById('past').value,
        med: document.getElementById('med').value,
        allergy: document.getElementById('allergy').value
    };

    try {
        const response = await fetch('/predict', {
            method: 'POST',
            headers: {'Content-Type': 'application/json'},
            body: JSON.stringify(data)
        });

        const result = await response.json();

        result.good_foods.forEach(food => {
            const li = document.createElement('li');
            li.textContent = food;
            li.classList.add('good');
            goodFoods.appendChild(li);
        });

        result.bad_foods.forEach(food => {
            const li = document.createElement('li');
            li.textContent = food;
            li.classList.add('bad');
            badFoods.appendChild(li);
        });

        resultCard.classList.remove('hidden');

    } catch (err) {
        console.error(err);
        alert('Error fetching prediction!');
    }
});