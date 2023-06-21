const colors = ['red','orange','yellow']
for (var color of colors) {
    console.log(color);
}

//OBJECT KEY METHOD
//Object.keys(), Object.values(), and Object.entries().
const car2 = {
    speed: 200,
    color: "red"
}
console.log(Object.keys(car2)); // ['speed','color']