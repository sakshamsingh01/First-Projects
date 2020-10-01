//import 'dart:ui';

import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import './quiz1.dart';

var ques = 0;
var flag = 0;
var qno=0;
var brain = new Maths();
var a;
class Maths{
  var qnos=['Q1.)Calculate the following :-','Q2.)Calculate the following :-','Q3.)Calculate the following :-','Q4.)Calculate the following :-','Q5.)Calculate the following :-','Q6.)Calculate the following :-','Q7.)Calculate the following :-','Q8.)Calculate the following :-','Q9.)Calculate the following :-','Q10.)Calculate the following :-'];
  var calci=[
    '25 + 12 = ?',
    '12 + 45 = ?',
    '9 * 8 = ?',
    '45 - 13 = ?',
    '48 / 12 = ?',
    '66 / 11 = ?',
    '13 * 3 = ?',
    '9 * 9 = ?',
    '9 + 9 = ?',
    '0 / 10 = ?'
  ];
  var answers=['37','57','72','32','4','6','39','81','18','0'];

}




class HomePage extends StatefulWidget {
  @override
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  int z;
  @override
  Widget build(BuildContext context) {

    return Scaffold(
      backgroundColor: Colors.white,
      appBar: AppBar(
        title: Text('Calci_Brains'),
      ),
      body: new Container(

        child: new Column(

          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: <Widget>[
            new Text(brain.qnos[qno],
              style: TextStyle(

                  fontSize: 26
              ),),
            new Text(brain.calci[ques],
              style: TextStyle(
                  fontSize: 30,
                  fontWeight: FontWeight.bold
              ),
            ),
            KatImageAsset(),
            new TextField(
              decoration: new InputDecoration(labelText: "Type Your Answer"),
              keyboardType: TextInputType.number,
              onSubmitted: (String text) {
                //   for(int i=0;i<10;i++)
                a= text.toString();
                if (a == brain.answers[ques])
                {print("Correct");
                }
                else
                  print("wrong");
                flag++;
              },
              inputFormatters: <TextInputFormatter>[
                WhitelistingTextInputFormatter.digitsOnly
              ],
            ),
          ],
        ),
      ),
      floatingActionButton: FloatingActionButton.extended(
        label: Text("NEXT"),
        //icon: Icon(Icons.skip_next),
        onPressed: next ,

      ),
    );
  }

  void next(){
    z=flag;
    setState(() {
      if (ques == brain.calci.length - 1 && qno == brain.qnos.length - 1)
        Navigator.push(
            context, MaterialPageRoute(builder: (extend) => new Mcq()));

      else
        qno++;
      ques++;
      // i++;
      //a = TextEditingValue.empty;

    } );

  }

}

class SecoundRoute extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Final Result'),
      ),
      body: Center(
        child: Text(flag.toString(),
          style: TextStyle(
              fontWeight: FontWeight.bold,
              fontSize: 200
          ),),
      ),
    );
  }
}

class KatImageAsset extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    AssetImage assetImage = AssetImage('images/kat.png');
    Image image = Image(image: assetImage,width: 200.0,height: 200.0,);
    return Container(child: image,);

  }
}


//_HomePageState d=new _HomePageState();