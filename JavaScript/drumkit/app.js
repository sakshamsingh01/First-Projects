const key = document.querySelectorAll('.key');
window.addEventListener('keypress',playSoundNow);
key.forEach(keyItem =>{
    keyItem.addEventListener('click',playSound);
})
function playSound(e){
  e.target.parentElement.classList.add('playing');
  e.target.parentElement.addEventListener('transitionend', function(e){
    e.target.classList.remove('playing');
  });
  switch (e.target.textContent.toLowerCase()) {
    case 'a':
        sound = new Audio('clap.wav');
        sound.play();
        
        break;
    case 's':
        sound = new Audio('hihat.wav');
        sound.play();
        break;
    case 'd':
        sound = new Audio('kick.wav');
        sound.play();
        break;
    case 'f':
        sound = new Audio('open-hat.wav');
        sound.play();
        break;
    case 'g':
        sound = new Audio('boom.wav');
        sound.play();
        break;
    case 'h':
        sound = new Audio('ride.wav');
        sound.play();
        break;
    case 'j':
        sound = new Audio('snare.wav');
        sound.play();
        break;
    case 'k':
        sound = new Audio('tom.wav');
        sound.play();
        break;
    case 'l':
        sound = new Audio('tink.wav');
        sound.play();
        break;
}


}
function playSoundNow(e){
    let sound;
    key.forEach(keyItem =>{
        
        if(keyItem.children[0].textContent === e.key.toUpperCase()){
            keyItem.classList.add('playing');
        }else{keyItem.classList.remove('playing');}
        keyItem.addEventListener('transitionend',endPlay);
    }
    )
    switch (e.key.toLowerCase()) {
        case 'a':
            sound = new Audio('clap.wav');
            sound.play();
            
            break;
        case 's':
            sound = new Audio('hihat.wav');
            sound.play();
            break;
        case 'd':
            sound = new Audio('kick.wav');
            sound.play();
            break;
        case 'f':
            sound = new Audio('open-hat.wav');
            sound.play();
            break;
        case 'g':
            sound = new Audio('boom.wav');
            sound.play();
            break;
        case 'h':
            sound = new Audio('ride.wav');
            sound.play();
            break;
        case 'j':
            sound = new Audio('snare.wav');
            sound.play();
            break;
        case 'k':
            sound = new Audio('tom.wav');
            sound.play();
            break;
        case 'l':
            sound = new Audio('tink.wav');
            sound.play();
            break;
            default:
                alert('READ IT CAREFULLY DUMB !! WE SAID ONLY MENTIONED KEY !!')
                break;
    }
}
function endPlay(e){
    
    e.target.classList.remove('playing');

  
}