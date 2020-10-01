package com.example.app1;

public class Quizemodel {
    private int mque;
    private boolean mAnswer;
    public Quizemodel(int ques, boolean ans)
    {
        mque=ques;
        mAnswer=ans;
    }

    public int getMque() {
        return mque;
    }

    public void setMque(int mque) {
        this.mque = mque;
    }

    public boolean ismAnswer() {
        return mAnswer;
    }

    public void setmAnswer(boolean mAnswer) {
        this.mAnswer = mAnswer;
    }
}
