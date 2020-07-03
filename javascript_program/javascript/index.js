var pera1 = document.querySelector("#pera1");
var pera2 = document.querySelector("#pera2");
var pera3 = document.querySelector("#pera3");
function addStyle(s) {
  if (s == "pera1") {
    pera1.classList.add("pera");
  } else if (s == "pera2") {
    pera2.classList.add("pera");
  } else if (s == "pera3") {
    pera3.classList.add("pera");
  }
}
function remove(s) {
  if (s == "pera1") {
    pera1.classList.remove("pera");
  } else if (s == "pera2") {
    pera2.classList.remove("pera");
  } else if (s == "pera3") {
    pera3.classList.remove("pera");
  }
}
