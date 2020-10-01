// Waktu
function startTime() {
    var today = new Date();
    var h = today.getHours();
    var m = ("0" + today.getMinutes()).slice(-2);
    var s = ("0" + today.getSeconds()).slice(-2);
    document.getElementById("waktu").innerHTML = h + ":" + m + ":" + s;
    var t = setTimeout(startTime, 500);
}

var today = new Date();
var h = today.getHours();
var jawaban = "";
if (h < 12) {
    jawaban = "<b>Morning</b>";
} else if (h >= 12 && h <= 17) {
    jawaban = "<b>Afternoon</b>";
} else if (h >= 17 && h <= 24) {
    jawaban = "<b>Evening</b>";
}

// Typeit
new TypeIt("#myElement", {
    startDelay: 2000,
    loop: true,
})

    .type("Good " + jawaban, { delay: 2000 })
    .delete(null, { delay: 1000 })
    .type("lopyu ❤️", { delay: 2000 })
    .go();
