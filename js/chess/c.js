var squares = document.querySelectorAll('.square');
var atb1=100;
squares.forEach(function(square){
atb1++;
var imagetoadd=document.createElement('img');
imagetoadd.setAttribute('data-number', atb1);
imagetoadd.setAttribute('style', 'z-index:1');
imagetoadd.style.display="none";
square.appendChild(imagetoadd);
});

let image = document.querySelectorAll('.row2');
  // Change the src attribute to the new image URL
  var atb=109;
  image.forEach (function(image){
  var newel =document.createElement('img');
  newel.setAttribute('class' , 'pawns');
  newel.setAttribute('data-number' , atb);
  atb++;
  newel.src = 'https://images.chesscomfiles.com/chess-themes/pieces/neo/150/bp.png';
  // newel.textContent = "hi9";
  image.appendChild(newel);
  });

  let image2 = document.querySelectorAll('.row7 ');
  // Change the src attribute to the new image URL
  var atb2=149;
  image2.forEach (function(image){
  var newel =document.createElement('img');
  newel.setAttribute('class' , 'pawns');
  newel.setAttribute('data-number' , atb2++);
  newel.src = 'https://images.chesscomfiles.com/chess-themes/pieces/neo/150/wp.png';
  image.appendChild(newel);
  });

  var pawns=document.querySelectorAll(".pawns");
  pawns.forEach(function(pawn){
  pawn.addEventListener('click' ,function() {
  // hiding previous innercircles
  var innerc = document.querySelectorAll("#innercircle");
  innerc.forEach(function(inn){
  inn.style.display="none";
  });
  var number =pawn.getAttribute('data-number');
  console.log(number);
  number++;number++;number++;number++;number++;number++;number++;number++;
  var sq = document.querySelector( '[data-number="' + number + '"]' );
  console.log(sq);
  sq.style.display='none';
  var circle =document.createElement('div');
  circle.setAttribute('id' , 'innercircle');
  // circle.setAttribute('style' , 'z-index:3');
  circle.classList.add('zIndexClass');
  sq.appendChild(circle);
  console.log(number);
  number++;number++;number++;number++;number++;number++;number++;number++;
  var sq2 =document.querySelector( '[data-number="' + number + '"]' );
  var circle2 =document.createElement('div');
  circle2.setAttribute('z-index' , 2);
  circle2.setAttribute('id' , 'innercircle');
  sq2.appendChild(circle2);
  console.log(number);
  });
  });
  
  // let circle = document.querySelector("#innercircle");
  // squares.forEach(function(square){
  //   var circle =document.createElement('div');
  //   circle.setAttribute('id' , 'innercircle');
  //   square.appendChild(circle);
  // });
