
// Usage of createElement(), createTextNode(), appendChild() ----------------

var newElement = document.createElement('h1');
var newContent = document.createTextNode("This is H1 element created through \"Create Element\"method");
newElement.appendChild(newContent);

document.querySelector("p").appendChild(newElement);

//-------------------------------