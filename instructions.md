 master


# How to start with this repository and contribute to it? 

## Forking repository

Forking means creating a copy of someone's code or repository to your account.
you can fork this repository by clicking on the fork button on the top of this page.
This will create a copy of this repository in your account.

Instructions how you can fork repositories. 
I am assuming that you are a real noob in the world of github.
let's start.
Instruction are for those who are on pc but no
problem mobile users in which ever browser you are there will be a option to convert to desktop site

1. search the repository you want(while searching click on search in all github option)
2. you'll find your wanted repository now on the top right hand side there will be an option of fork just click on that.
3. If an animation is coming forking is successful 
4. Now you'll have a copy of that repository with you , you can make changes in it . Don't forget to commit changes.
5. If you think your changes are worth it go in the option of pull request right at the top of files
6. click on that .
7. suggest name for the change .
8. Click the option create pull request 
9. Done 
10. Dont forget to start this repo.
11. keep supporting opens source 
:) 

## Clone the repository

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/clone.png" alt="clone this repository" />

#### If you don't have git on your machine, [install it](https://help.github.com/articles/set-up-git/).
Now clone the forked repository to your machine. Go to your GitHub account, open the forked repository, click on the code button and then click the _copy to clipboard_ icon.

Open a terminal and run the following git command:
```
git clone "url you just copied"
```

where "url you just copied" (without the quotation marks) is the url to this repository (your fork of this project). See the previous steps to obtain the url.

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/copy-to-clipboard.png" alt="copy URL to clipboard" />

For example:

```
git clone https://github.com/this-is-you/First-Projects.git
```

where `this-is-you` is your GitHub username. Here you're copying the contents of the first-contributions repository on GitHub to your computer.

## Create a branch

Change to the repository directory on your computer (if you are not already there):

```
cd first-contributions
```

Now create a branch using the `git checkout` command:

```
git checkout -b your-new-branch-name
```

For example:

```
git checkout -b add-alonzo-church
```

(The name of the branch does not need to have the word _add_ in it, but it's a reasonable thing to include because the purpose of this branch is to add your name to a list.)

## Make necessary changes and commit those changes

Now open `Contributors.md` file in a text editor, add your name to it. Don't add it at the beginning or end of the file. Put it anywhere in between. Now, save the file.

<img align="right" width="450" src="assets/git-status.png" alt="git status" />

If you go to the project directory and execute the command `git status`, you'll see there are changes.

Add those changes to the branch you just created using the `git add` command:

```
git add Contributors.md
```

Now commit those changes using the `git commit` command:

```
git commit -m "Add <your-name> to Contributors list"
```

replacing `<your-name>` with your name.

## Push changes to GitHub

Push your changes using the command `git push`:

```
git push origin <add-your-branch-name>
```

replacing `<add-your-branch-name>` with the name of the branch you created earlier.

## Submit your changes for review

If you go to your repository on GitHub, you'll see a `Compare & pull request` button. Click on that button.

<img style="float: right;" src="assets/compare-and-pull.jpg"  />

Now submit the pull request.

<img style="float: right;" src="assets/submit-pull-request.png" alt="submit pull request" />

Soon I'll be merging all your changes into the master branch of this project. You will get a notification email once the changes have been merged.

###  Congrats! You just completed the standard _fork -> clone -> edit -> pull request_ workflow that you'll encounter often as a contributor!
 master
