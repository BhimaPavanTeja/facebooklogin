var fruits = [] //array object declaraation
fruits.push("apple")
fruits.push("mango")
fruits.pop(); //removing last term
console.log(fruits)

function arrayBuilder(one, two, three) {
    var arr = [];
    arr.push(one);
    arr.push(two);
    arr.push(three);
    console.log(arr);
}
arrayBuilder('apple','mango','orange')