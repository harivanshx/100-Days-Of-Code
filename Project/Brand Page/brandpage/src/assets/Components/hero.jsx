const Hero = () => {
  return (
    <main className="Hero container">
      <div className="Hero-Content">
        <h1>YOUR FEET DESERVE THE BEST</h1>
        <p>
          YOUR FEET DESERVE THE BEST AND WE’RE HERE TO HELP YOU WITH OUR
          SHOES.YOUR FEET DESERVE THE BEST AND WE’RE HERE TO HELP YOU WITH OUR
          SHOES.
        </p>
        <div className="hero-button">
          <button>Shop Now</button>
          <button className="secondary-btn">Category</button>
         
        </div>
        <div className="shopping">
            <p>Also Available on</p>
            <div className="brand-icons">
              <img src="/images/flipkart.png" alt="" />
              <img src="/images/amazon.png" alt="" />
            </div>
          </div>
      </div>

      <div className="Hero-img">
        <img src="/images/shoe_image.png" alt="" />
      </div>
    </main>
  );
};

export default Hero;
