var marks = {
    pavan: 90,
    ravi: 60,
    shubam: 40,
    rakesh: 70
}
for(let i=0;i<Object.keys(marks).length;i++) {
    console.log("the marks of " + Object.keys(marks)[i] + " are " + marks[Object.keys(marks)[i]]);
}
console.log("<------------another method---------------->")
for(let key in marks) {
    console.log("The marks of " + key + " are " + marks[key]);
}