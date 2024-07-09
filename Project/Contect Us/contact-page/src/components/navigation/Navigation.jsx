import React from 'react'
import styles from './Navigation.module.css';

const Navigation = () => {
  console.log(styles);
  
  return (
    <nav className='container'>
        <div className='logo'>
            <img src="/images/Frame 2 1.png" alt="do some coding logo" />
        </div>
       <ul>
        <li><a href="#">Home</a></li>
        <li><a href="#">About</a></li>
        <li><a href="#">Linkedin</a></li>
        <li><a href="#">Navigation</a></li>
       </ul>
    </nav>
  )
}

export default Navigation
