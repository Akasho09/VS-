// Wait for the DOM content to be fully loaded
document.addEventListener('DOMContentLoaded', function() {
    // Create a new element
    var newElement = document.createElement('p');
  
    // Set content or attributes for the new element
    newElement.textContent = 'This is a new paragraph added dynamically using JavaScript';
    // newElement.setAttribute('class', 'myClass'); // Example of setting attribute
  
    // Get the container element where you want to append the new element
    var container = document.getElementById('container');
  
    // Append the new element to the container
    container.appendChild(newElement);
  });