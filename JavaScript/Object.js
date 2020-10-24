// ---- Object ----------

var user ={
     userfirstName: "Sweta",
     userLastName:"verma",
     id: 1245,
     age : 26,
     getFullName(){
         return (`This is my full name ${this.userfirstName} ${this.userLastName}`);
     }
}

console.log(user);  // access object
console.log(user.getFullName()); // method call 
console.log(user.age); // dot notation
console.log(user["age"]); //bracket notation