//OOP code using this method
var purchase1 = {
    shoes: 50,
    stateTax: 1.2,
    totalPrice: function() {
        var calculation = this.shoes*this.stateTax //this means this object
        console.log('Total price:', calculation)
    }
}
purchase1.totalPrice() //dot method.
// OOP code original method
var purchase2 = {
    shoes:100,
    stateTax: 1.2,
    totalprice: function() {
        var calculation = purchase2.shoes*purchase2.stateTax
        console.log('Total price:',calculation)
    }
}
purchase2.totalprice()