import 'package:flutter/material.dart';
//import './main.dart';
import './jindal.dart';
import './vaish.dart';
import './first.dart';

//var z=new Test();


var finalScore = 0;
var questionNumber = 0;
var quiz = new AnimalQuiz();

class AnimalQuiz{
  var questions = [
    "How old are you?",
    "What is your name?",
    "In which city do you live?",
    "Do you experience visual problems, such as trouble with reading or judging distance or color?",
    "What is your Pin code?",
    "Do you need more daily assistance?",
    "What is your birth month?",
    "Select your phone number.",
    "What is your birth year?",
    "Select your email address."
  ];


  var choices = [
    ["60", "78", "32", age.toString()],
    ["Ramu", "Princ", name.toString(), "Gopal"],
    [city.toString(), "aligarh", "kanpur", "bijnor"],
    ["Never", "sometime", "very often", "Rarely"],
    ["301019",pin.toString(),"202001","202396"],
    ["Never", "sometime", "very often", "Rarely"],
    ["jaunary","september","june",bm.toString()],
    ["789583452","7425081953",phone.toString(),"8400871753"],
    ["1982",by.toString(),"1988","1996"],
    [email.toString(),"123Srm@gmail.com","coder@gmail.com","hhloyal2@gmail.com"]
  ];


  var correctAnswers = [
    age.toString(), name.toString(), city.toString(), "sometime",pin.toString(),"sometime",bm.toString(),phone.toString()
  ,by.toString(),email.toString()
  ];
}
class Mcq extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Quiz1(),
    );
  }
}

class Quiz1 extends StatefulWidget{
  @override
  State<StatefulWidget> createState() {
    return new Quiz1State();
  }
}

class Quiz1State extends State<Quiz1> {
  @override
  Widget build(BuildContext context) {
    return new SafeArea(child:Scaffold(
          //backgroundColor: Colors.black,

          body: new Container(
            margin: const EdgeInsets.all(10.0),
            alignment: Alignment.topCenter,
            child: new Column(
              children: <Widget>[
                new Padding(padding: EdgeInsets.all(20.0)),

                new Container(
                  alignment: Alignment.centerRight,
                  child: new Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: <Widget>[

                      new Text("Question ${questionNumber + 1} of ${quiz.questions.length}",
                        style: new TextStyle(
                          color: Colors.black,
                            fontSize: 22.0
                        ),),

                      new Text("Score: $finalScore",
                        style: new TextStyle(
                            fontSize: 22.0
                        ),)
                    ],
                  ),
                ),




                new Padding(padding: EdgeInsets.all(10.0)),

                new Text(quiz.questions[questionNumber],
                  style: new TextStyle(
                    color: Colors.black,
                    fontSize: 20.0,
                  ),),

                new Padding(padding: EdgeInsets.all(10.0)),

                new Row(
                  mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                  children: <Widget>[

                    //button 1
                    new MaterialButton(
                      minWidth: 120.0,
                      color: Colors.blueGrey,
                      onPressed: (){
                        if(quiz.choices[questionNumber][0] == quiz.correctAnswers[questionNumber]){
                          debugPrint("Correct");

                        }else{
                          debugPrint("Wrong");
                          finalScore++;
                        }
                        updateQuestion();
                      },
                      child: new Text(quiz.choices[questionNumber][0],
                        style: new TextStyle(
                            fontSize: 20.0,
                            color: Colors.white
                        ),),
                    ),

                    //button 2
                    new MaterialButton(
                      minWidth: 120.0,
                      color: Colors.blueGrey,
                      onPressed: (){

                        if(quiz.choices[questionNumber][1] == quiz.correctAnswers[questionNumber]){
                          debugPrint("Correct");

                        }else{
                          debugPrint("Wrong");
                          finalScore++;
                        }
                        updateQuestion();
                      },
                      child: new Text(quiz.choices[questionNumber][1],
                        style: new TextStyle(
                            fontSize: 20.0,
                            color: Colors.white
                        ),),
                    ),

                  ],
                ),

                new Padding(padding: EdgeInsets.all(10.0)),

                new Row(
                  mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                  children: <Widget>[

                    //button 3
                    new MaterialButton(
                      minWidth: 120.0,
                      color: Colors.blueGrey,
                      onPressed: (){

                        if(quiz.choices[questionNumber][2] == quiz.correctAnswers[questionNumber]){
                          debugPrint("Correct");

                        }else{
                          debugPrint("Wrong");
                          finalScore++;
                        }
                        updateQuestion();
                      },
                      child: new Text(quiz.choices[questionNumber][2],
                        style: new TextStyle(
                            fontSize: 20.0,
                            color: Colors.white
                        ),),
                    ),

                    //button 4
                    new MaterialButton(
                      minWidth: 120.0,
                      color: Colors.blueGrey,
                      onPressed: (){

                        if(quiz.choices[questionNumber][3] == quiz.correctAnswers[questionNumber]){
                          debugPrint("Correct");

                        }else{
                          debugPrint("Wrong");
                          finalScore++;
                        }
                        updateQuestion();
                      },
                      child: new Text(quiz.choices[questionNumber][3],
                        style: new TextStyle(
                            fontSize: 20.0,
                            color: Colors.white
                        ),),
                    ),

                  ],
                ),

               // new Padding(padding: EdgeInsets.all(15.0)),






              ],
            ),
          ),

        )
    ) ;
  }

  void resetQuiz(){
    setState(() {
      Navigator.pop(context);
      finalScore = 0;
      questionNumber = 0;
    });
  }



  void updateQuestion(){
    setState(() {
      if(questionNumber == quiz.questions.length - 1){
        //finalScore=finalScore+s;
        Navigator.push(context, new MaterialPageRoute(builder: (context)=> new Go()));

      }else{
        questionNumber++;
      }
    });
  }
}



var re=flag+finalScore;

