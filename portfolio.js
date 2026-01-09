

const greeting = document.getElementById("greeting");
const hour = new Date().getHours();

if (hour < 12) {
  greetingreeting.textContent = "Good Morning, Visitor!";
} else if (hour < 18) {
  greeting.textContent = "Good Afternoon, Visitor!";
} else {
  greeting.textContent = "Good Evening, Visitor!";
}

const toggle = document.getElementById("theme-toggle");
const body = document.body;

toggle.addEventListener("click", () => {
  body.classList.toggle("dark-mode");
});


document.getElementById("contactForm").addEventListener("submit", function (event) {
  
  const name = document.getElementById("name").value.trim();
  const email = document.getElementById("Email").value.trim();
  const intro = document.getElementById("intro").value.trim();

  
  const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

  
  if (name === "") {
    alert("Please enter your name.");
    event.preventDefault();
    return;
  }

  if (!emailPattern.test(email)) {
    alert("Please enter a valid email address.");
    event.preventDefault();
    return;
  }

  if (intro === "") {
    alert("Please write something about yourself.");
    event.preventDefault();
    return;
  }

 
  alert("Form submitted successfully!");
});



document.addEventListener("DOMContentLoaded", () => {
  const skills = document.querySelectorAll(".skill");

  skills.forEach(skill => {
    const target = skill.getAttribute("data-skill");
    const fill = skill.querySelector(".skill-fill");
    const percent = skill.querySelector(".skill-percent");

    let current = 0;

    const timer = setInterval(() => {
      if (current >= target) {
        clearInterval(timer);
      } else {
        current++;
        fill.style.width = current + "%";
        percent.textContent = current + "%";
      }
    }, 20); 
  });
});