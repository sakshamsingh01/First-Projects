package com.example.app1;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.*;

public class MainActivity extends AppCompatActivity {

    private TextView mtextques;
    private Button falsebut;
    private Button truebut;
    private int mquesindex=0;
    private int mquizequestion;
    private Quizemodel[] quesarr =new Quizemodel[]{
            new Quizemodel(R.string.q1,true),
            new Quizemodel(R.string.q2,false),
            new Quizemodel(R.string.q3,true),
            new Quizemodel(R.string.q4,true),
            new Quizemodel(R.string.q5,false),
            new Quizemodel(R.string.q6,false),
            new Quizemodel(R.string.q7,true),
            new Quizemodel(R.string.q8,false),
            new Quizemodel(R.string.q9,true),
            new Quizemodel(R.string.q10,true),


    };


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mtextques=findViewById(R.id.txtq);
        Quizemodel q1=quesarr[mquesindex];

        mquizequestion=q1.getMque();
        mtextques.setText(mquizequestion);


        truebut=findViewById(R.id.truebut);
        View.OnClickListener myclicklistner= new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                evaluat(true);
                changequest();

            }
        };
        truebut.setOnClickListener(myclicklistner);
        falsebut =findViewById(R.id.falsebut);
        View.OnClickListener falselistner= new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                changequest();
                evaluat(false);

            }
        };
        falsebut.setOnClickListener(falselistner);

    }



    private void changequest()
    {
        mquesindex=(mquesindex+1)%10;
        mquizequestion=quesarr[mquesindex].getMque();
        mtextques.setText(mquizequestion);
    }


    private void evaluat(boolean usergues)
    {
        boolean currentQuestion=quesarr[mquesindex].ismAnswer();
        if(currentQuestion==usergues)
        {
            Toast.makeText(getApplicationContext(),R.string.correct_toast_message,Toast.LENGTH_SHORT).show();
        }
        else
        {
            Toast.makeText(getApplicationContext(),R.string.incorrecte_toast_message,Toast.LENGTH_SHORT).show();
        }

    }


}
