const my_choice=document.getElementById('mychoice')
const computer_Choice=document.getElementById('compter_choice')
const result=document.getElementById('result')

let getInput
let computer_choiced
let results

const p_choices=document.querySelectorAll('button')
p_choices.forEach(choice =>choice.addEventListener('click', (e) =>{
    getInput=e.target.id
    my_choice.innerHTML=getInput
    generate_comuter_choice()
    g_result()
}))

function generate_comuter_choice(){
    const r_Number=Math.floor(Math.random()*3)
    if(r_Number === 0){
        computer_choiced='paper'
    }
    if(r_Number === 1){
        computer_choiced='rock'
    }
    if(r_Number === 2){
        computer_choiced='scissor'
    }
    computer_Choice.innerHTML=computer_choiced
}

function g_result(){
    if(getInput === computer_choiced){
        results='Draw'
    }
    if(getInput === 'paper' && computer_choiced === 'rock' || getInput === 'rock' && computer_choiced === 'scissor' || getInput === 'scissor' && computer_choiced === 'paper'){
        results='You Won'
    }
    if(getInput === 'paper' && computer_choiced === 'scissor' || getInput === 'rock' && computer_choiced === 'paper' || getInput === 'scissor' && computer_choiced === 'rock'){
        results='You Lose'
    }
    console.log(getInput)
    console.log(computer_choiced)
    console.log(results)
    result.innerHTML=results

}