// { PROGRAMMING ASSIGNMENT }
// Task 1: Code a Person class
class person {
    constructor(name, age, energy) {
        this.name = "Tom"
        this.age = 20
        this.energy = 100
    }
    sleep() {
        this.energy += 10
    }
    doSomethingFun() {
        this.energy -= 10
    }
}
// Task 2: Code a Worker class
class worker extends person {
    constructor(energy, job, xp = 0, hourlyWage) {
        super(energy)
        this.job = job
        this.xp = xp
        this.hourlyWage = hourlyWage
    }
    goToWork() {
        this.xp += 10
    }
}
// Task 3: Code an intern object, run methods
function intern() {
    let intern = new worker(110, "Intern", 0, 10)
    intern.name = "Bob"
    intern.age = 21
    intern.goToWork();
    return intern;
}
let newIntern = intern();
console.log(newIntern); // output: Worker {energy: 110, job: "Intern", xp: 10, hourlyWage: 10, name: "Bob", age: 21}
console.log(newIntern.xp); // output: 10
console.log(newIntern.name); // output: "Bob"
console.log(newIntern.age); // output: 21
// Task 4: Code a manager object, methods
function manager() {
    let manager = new worker(120, "Manager", 100, 30)
    manager.name = "Alice"
    manager.age = 30
    manager.doSomethingFun();
    return manager;
}
let newManager = manager();
console.log(newManager); // output: Worker {energy: 90, job: 'Manager', xp: 100, hourlyWage: 30, name: 'Alice', age: 30}
console.log(newManager.xp); // output: 100
console.log(newManager.name); // output: "Alice"
console.log(newManager.age); // output: 30
