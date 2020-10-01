import 'package:flutter/material.dart';
//import 'package:flutter_app/quiz1.dart';
//import './quiz1.dart';
import './vaish.dart';
/*
void main(){
  runApp(
      new MaterialApp(
        debugShowCheckedModeBanner: false,
        home: new AnimalQuiz(),
      )
  );
}

class AnimalQuiz extends StatefulWidget{
  @override
  State<StatefulWidget> createState() {
    return new AnimalQuizState();
  }
}

class AnimalQuizState extends State<AnimalQuiz>{
  @override
  Widget build(BuildContext context) {
    return new Scaffold(
      backgroundColor: Colors.black,
      appBar: new AppBar(
        title: new Text("ALzheimer test Quiz"),
        backgroundColor: Colors.blue,
      ),


      body:

      new Container(
        margin: const EdgeInsets.all(15.0),
        child: new Column(


          crossAxisAlignment: CrossAxisAlignment.stretch,
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[

            new MaterialButton(
                height: 50.0,
                color: Colors.green,
                onPressed: startQuiz,
                child: new Text("Quiz 1",
                  style: new TextStyle(
                      fontSize: 18.0,
                      color: Colors.white
                  ),)
            )
          ],
        ),
      ),


    );
  }

  void startQuiz(){
    setState(() {
      Navigator.push(context, new MaterialPageRoute(builder: (context)=> new MyHomePage()));
    });
  }

}
class Test{
  var a="ram";
}*/
import 'package:flutter/cupertino.dart';
void main(){
  runApp(MyApp());
}
class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,

      home: new First(),
    );
  }
}

class First extends StatefulWidget {
  @override
  _FirstState createState() => _FirstState();
}

class _FirstState extends State<First> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: new AppBar(
            title: new Text("ALzheimer test Quiz"),
            backgroundColor: Colors.blue),
        body:  new Container(
            child: new Column(
                children: <Widget>[
                  new Text("Description",style:TextStyle(fontSize: 60,
                    shadows: [
                      Shadow(
                        blurRadius: 10.0,
                        color: Colors.blue,
                        offset: Offset(5.0, 5.0),
                      ),
                    ],
                  ),
                  ),
                  new Text("Alzheimer’s disease is an irreversible, progressive brain "
                      "disorder. In most people with this disease, symptoms first appear in their mid-60s. Alzheimer’s disease is the"
                      " most common cause of dementia among senior citizens.\n  \n The main aim of this game is to"
                      " predict the possibility of a person suffering from the Alzheimer's. "
                      " After compelition of several satges, conclusion is drawn on the basis of "
                      "cumulative statistics, based on the player's performance in various stages of the game.",
                    style:TextStyle(fontWeight: FontWeight.bold,fontSize: 20,),textAlign: TextAlign.center,),

                  //  new Text("")],
                ]


            )
        ),
        floatingActionButton: FloatingActionButton.extended(
          onPressed: fun,
          label: Text('Start Game'),
          //icon: Icon(Icons.arrow_forward_ios),
        )
    );

  }
  void fun(){
    print('pressed');
    Navigator.push(context, new MaterialPageRoute(builder: (context)=> new MyHomePage()));
  }
}