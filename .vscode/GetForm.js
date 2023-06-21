// Get the form element
const form = document.querySelector('form');

// Add a submit event listener to the form
form.addEventListener('submit', function(event) {
  // Prevent the default form submission behavior
  event.preventDefault();

  // Get the form data
  const formData = new FormData(form);

  // Validate the form data
  if (!validateFormData(formData)) {
    return;
  }

  // Submit the form
  submitForm(formData);
});

// Validate the form data
function validateFormData(formData) {
  // Get the form inputs
  const name = formData.get('name');
  const email = formData.get('email');
  const phone = formData.get('phone');
  const foodItem = formData.get('food-item');
  const quantity = formData.get('quantity');
  const date = formData.get('date');
  const time = formData.get('time');

  // Validate each input
  if (name.trim() === '') {
    alert('Please enter your name');
    return false;
  }

  if (!isValidEmail(email)) {
    alert('Please enter a valid email address');
    return false;
  }

  if (!isValidPhone(phone)) {
    alert('Please enter a valid phone number');
    return false;
  }

  if (foodItem === '') {
    alert('Please select a food item');
    return false;
  }

  if (quantity < 1 || quantity > 10) {
    alert('Please enter a quantity between 1 and 10');
    return false;
  }

  if (date === '') {
    alert('Please select a pickup date');
    return false;
  }

  if (time === '') {
    alert('Please select a pickup time');
    return false;
  }

  // If all inputs are valid, return true
  return true;
}

// Check if an email address is valid
function isValidEmail(email) {
  const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
  return emailRegex.test(email);
}

// Check if a phone number is valid
function isValidPhone(phone) {
  const phoneRegex = /^[0-9]{10}$/;
  return phoneRegex.test(phone);
}

// Submit the form
function submitForm(formData) {
  // Replace the following URL with your own API endpoint or server-side script URL
  const url = 'https://goweather.herokuapp.com/weather/Curitiba';

  // Create a new XMLHttpRequest object
  const xhr = new XMLHttpRequest();

  // Set the HTTP method and URL
  xhr.open('POST', url);

  // Set the Content-Type header to indicate that we're sending form data
  xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');

  // Add an event listener to the XMLHttpRequest object to handle the response
  xhr.addEventListener('load', function() {
    // Handle the response
    if (xhr.status === 200) {
      alert('Your booking has been submitted successfully!');
      form.reset();
    } else {
      alert('There was an error submitting your booking. Please try again later.');
    }
  });

  // Convert the form data to a URL-encoded string
  const encodedFormData = new URLSearchParams(formData).toString();

  // Send the form data as the request body
  xhr.send(encodedFormData);
}