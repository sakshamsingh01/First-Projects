var rgbColors = document.querySelector("#textColor");
var squares = document.querySelectorAll(".square");
var resetBtn = document.querySelector("#reset");
// var easyBtn = document.querySelector("#easyMode");
// var hardBtn = document.querySelector("#hardMode");
var modeBtn = document.querySelectorAll("#mode");
var heading = document.querySelector("#guessColor");
var answer = document.querySelector("#answer");
// list of colors to store RGB values for squares
var colorList = [];
var num = 3;
var answerColor;
var answerColorIndex = Math.floor(Math.random() * num);

function init () {
	// creating radom colored boxes
	generateColors();
	rgbColors.textContent = 'RGB (' + colorList[answerColorIndex][0] + ', '  + colorList[answerColorIndex][1] + ', ' + colorList[answerColorIndex][2] + ')';
	answerColor = 'rgb(' + colorList[answerColorIndex][0] + ', '  + colorList[answerColorIndex][1] + ', ' + colorList[answerColorIndex][2] + ')';
	// selecting a random box
	answerColorIndex = Math.floor(Math.random() * num);
	listen (num);
}

init();

// function to generate and assign random colors to squares
function generateColors () {
	color = [];
	for (var i = 0; i < num; ++i) {	
		var list = [];
		for (var j = 0; j < 3; ++j) {
			var randomColor = Math.floor(Math.random() * 256);
			list.push(randomColor);
		}
		var color = 'rgb(' + list[0] + ', '  + list[1] + ', ' + list[2] + ')';
		colorList.push(list);
	}
	answerColorIndex = Math.floor(Math.random() * num);
	answerColor = 'rgb(' + colorList[answerColorIndex][0] + ', '  + colorList[answerColorIndex][1] + ', ' + colorList[answerColorIndex][2] + ')';
	rgbColors.textContent = 'RGB (' + colorList[answerColorIndex][0] + ', '  + colorList[answerColorIndex][1] + ', ' + colorList[answerColorIndex][2] + ')';
	colorBoxes();
}

function colorAllSame (color) {
	for (var i = 0; i < num; ++i) {
		squares[i].style.backgroundColor = color;
		heading.style.backgroundColor = color;
	}
}

function colorBoxes () {
	for (var i = 0; i < num; ++i) {
		squares[i].style.backgroundColor = 'rgb(' + colorList[i][0] + ', '  + colorList[i][1] + ', ' + colorList[i][2] + ')';
	}
	for (var i = num; i < 6; ++i) {
		squares[i].style.backgroundColor = "#232323";
	}
}


for (var i = 0; i < modeBtn.length; ++i) {
	modeBtn[i].addEventListener("click", function() {
		// adding class in this button
		this.classList.add("selectedBtn");
		// removing class from all others
		for (var j = 0; j < modeBtn.length; ++j) {
			if (modeBtn[j] !== this) {
				modeBtn[j].classList.remove("selectedBtn");
			}
		}
		num = (this.textContent == "EASY"? 3 : 6);
		resetGame();
		listen(num);
	});
}

function listen (n) {
	for (var i = 0; i < n; ++i) {
		squares[i].addEventListener("click", function () {
			if (answerColor == this.style.backgroundColor) {
				// mark all boxes and jumbotron as color
				colorAllSame(this.style.backgroundColor);
				// change text to Play Again
				resetBtn.textContent = "Play Again";
				// middle text as CORRECT!
				answer.textContent = "CORRECT!";
			} else {
				this.style.backgroundColor = '#232323';
				// middle text as Try Again
				answer.textContent = "Try Again";
			}
		});
	}
}

// reseting game on pressing button resetBtn
function resetGame () {
	// clearing list of colors
	colorList = [];
	// change text to New Color
	resetBtn.textContent = "New Color";
	// changing heading color back to steelblue
	heading.style.backgroundColor = "steelblue";
	// middle text as CORRECT!
	answer.textContent = "";
	// generating new colors
	generateColors();
	// console.log(answerColorIndex);
	// console.log(num);
}

resetBtn.addEventListener("click", resetGame);