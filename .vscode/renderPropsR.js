import './App.css';
import { useEffect, useState } from 'react';

const DataFetcher = ({ render, url }) => {
    const [data, setData] = useState([]);

    useEffect(() => {
        if(url.includes('Desserts')) {
            setData(['cake', 'ice cream', 'pie', 'brownie', 'chocolate']);
        } else {
            setData(['water', 'soda', 'juice', 'coke']);
        }
}, []);

 return render(data);
};

function DessertsCount() {
    return (
        <DataFetcher
            url="https://littlelemon/desserts"
            render={(data) => <p>{data.length} desserts</p>} />
    );
}

function DrinksCount() {
    return (
        <DataFetcher
            url="https://littlelemon/drinks"
            render={(data) => <h3>{data.length} drinks</h3>} />
    );
}

function App() {
    return (
        <div className='App'>
            <header className='Header'>Little Lemon Restaurant 🍕</header>
            <DessertsCount />
            <DrinksCount />
        </div>
    );
}

export default App;