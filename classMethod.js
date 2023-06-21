// here person is class
class Person {
    constructor(name) {                                    // {part 01 of class}
        this.name = name;
    }

    greet() {                                              // {part 02 of class}
        console.log(`Hello, my name is ${this.name}.`);
    }
    Inform() {
        console.log(`hai , welcome ${this.name} sir.`);
    }
}

const person1 = new Person("John"); // new method.
person1.greet(); // Output: "Hello, my name is John."
person1.Inform();
const person2 = new Person("Sara"); //new method.
person2.greet(); // Output: "Hello, my name is Sara."
person2.Inform();
