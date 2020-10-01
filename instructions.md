### Step One: Fork this repository
  ![Fork Image](/instruction-images/fork.png)

  - You can find the **Fork** button under your profile picture
  - Simply click on that button and this repository will be forked in no time
  - If you don't understand what does that **Fork** button do, you may want to read this [article](https://www.earthdatascience.org/workshops/intro-version-control-git/about-forks/)

### Step Two: Clone the Forked repository

  - After you **fork** this repository, you will be redirected to your **forked** repository (I will refer to it as "your repository" from now on)
  - From here you can copy the link to your repository as shown below:

   ![Copy Link](/instruction-images/copy_link.png)

  - Open the **Terminal (or Command Lines)** and enter the following:
  > git clone < the url to the repo you just copy >

  (Be sure not to include the <>)

  - Now head to the newly created folder **First-Projects** folder and start adding your own code there (Remember to follow the folder structure noted in the **README.md**)

### Step Three: Push your changes to your forked repository

  - You have made many interesting changes. So now how do we get these changes online. Follow the step below

   - Open the **Termninal (or Command Line)** and **cd** to the **First-Projects** folder
   > cd <path to the *First Project* folder>

   - Now **Add** your changes
   > git add .

   - Now we make a new **Commit**
   > git commit -m "Commit Message"

   - **Push** your **Commit** to the repository
   >git push origin master

  - You have successfully **Push** your changes to your repository. Now the only thing left is to make a new **Pull Request** and get your changes to the main repository

### Step Four: Make a pull request

  ![Pull Button](/instruction-images/pull_button.png)

  See that shiny **Pull Request** button? Press on it and make a new **Pull Request**
