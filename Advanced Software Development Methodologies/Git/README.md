# Git-quicklabs

# What is git?

Git is a free and open source distributed version control system designed to handle everything from small to very large projects with speed and efficiency.

Git is easy to learn and has a tiny footprint with lightning fast performance. Learn more about git https://git-scm.com/

The skills you'll practice are applicable to any role involved with storing work in git (code, documentation, any type of file).

At the end you will be able to:

1. Create a repo

2. Make changes to the code base

3. Open up a pull request (PR)

4. Merge code into the master branch

# Prerequisites

You will need a GitHub account (it is free). Go to https://github.com/join and set up a GitHub account if you do not have one already.

# Install git

Start by installing git on your instance. When you're working on your own projects, it is always a good idea to check for updates even if you already have git installed. You can install it as a package, via another installer, or download the source code and compile it yourself. In this lab, you will install it via a binary installer using yum.

1. Click the SSH button for your instance that was made for you when you started the lab.

2. Run the following command in your SSH window:

 &nbsp; <code>sudo apt-get install git-all</code>

Note: You can click the clipboard icon to copy it to your clipboard, then paste it into your session. You can do this throughout the lab.

1. You may be prompted to type Y to confirm installation.

2. Verify your installation with the following command:

 &nbsp; <code>git --version</code>

The response will be the git version. If your response is something like -bash: git: command not found, there was a problem with installation and you should try again.

# Create a local git repository

Now that git is installed, create a new repository (or repo for short) to hold your release notes. When you work on your own projects, you can create repositories in any directory you want.

1. Create a directory for your project with the mkdir (make directory) command:

 &nbsp; <code>mkdir myproject</code>

2. Then open the directory with the cd (change directory) command.

<code>cd myproject </code>

3. Now, initialize your new git repository in the folder with the git init command:

  &nbsp;<code>git init</code>

You just initialized a git repository.

# Add a file to the repo

Your repository is empty. It's time to put something in it!

1. Add a new file to the project. You can use any text editor you like when you are working on your own projects, but for this lab, simply create a new file with the touch command. Replace <file name> with a name for your file:

 &nbsp;<code>touch <file name>.txt</code>

2. Run the ls (list) command to verify that the file was created in your project directory:

 &nbsp;  <code>ls </code>

3. Check to see which files git knows about with the git status command:

 &nbsp;<code>git status </code>

What do you see? 
Git's saying that it knows the file exists, but since you haven't added the file to the repo yet, git isn't saving it.

# Add a file to staging

The next step is to add your file to the staging environment (sometimes referred to as the index). You must do this before you commit a file. When you're working, use the staging environment as just that - a staging ground - for actively editing your files.

1. Add the file to the staging environment with the git add command:

 &nbsp;<code>git add <file name> </code>

2. Run the git status command again:

 &nbsp;<code>git status</code>

Notice the "Changes to be committed" line. You will see that git added your file to the staging environment, but the file has not yet been added to a commit.

# Create a commit

A commit is a record of what files you have changed since the last commit. Commits allow you to go back to the state of the project at any point in history. You create a commit in order to add files to the Master.

First you need to identify yourself, then you can create the commit.

1. Run the following, filling in any email for "you@example.com":

 &nbsp; <code>git config --global user.email "you@example.com"</code>

2. Run the following, filling in any name for "Your Name":

 &nbsp; <code>git config --global user.name "Your Name"</code>

3. Run the following git commit command. Your message should relate to what's in your commit - for posterity:

 &nbsp; <code>git commit -m "<your message about the commit>" </code>

# Create a new branch
 
Back to your documentation use case, say there is a release coming out next month, and the release includes significant changes to one of your products. You need to update the product guide to help your customers use the new features. You want to make changes to the product guide but you are worried about editing a guide that is actively used for reference by your team and shared with your customers. The solution? Git branches.

Branches let you move back and forth between versions, or states, of any given project. In this example, you can create a new branch for the upcoming release without affecting the current product guide. Once you're done with the product guide updates, you can merge your changes from the release branch to the master branch.

Bonus: Git tracks the history of branches for you so you always know the history behind all your files and versions.

1. Since you're on the master branch already, run the <code>git checkout -b </code>command and name your branch. The command will:

-Automatically create a new branch, using the name you specify

-Immediately check the branch out to you

-Move you to the new branch

<code>git checkout -b <branch name> </code>

2. Confirm that your branch was created:

 &nbsp; <code>git status</code>

3. Switch back to the master branch.

 &nbsp; <code>git checkout master </code>

4. Make another file and add it:
 
<code>touch <file name>.txt </code>

 &nbsp; <code>git add <file name>.txt </code>

5. Use <code>git commit -m "Your message about the commit"  </code>to stage your changes.

6. Return to your branch.

 &nbsp; <code>git checkout <branch name> </code>

Do you see any of the latest commits? You won't see the changes until you merge them into your new branch.

# Create a GitHub repo

If you're the sole owner of your project, you don't need to use GitHub. But if you're on a team, you can use GitHub to collaborate without stepping on each others' toes.

1. To create a new repo on GitHub, go to github.com and log in.

2. Click New repository

3. GitHub will ask you for some basic info about your repo. Fill out the form, then click Create repository.

4. GitHub will ask you if you want to start from scratch or add a local project. Since you just created a new repo, you want to push that to GitHub. Follow the "...or push an existing repository from the command line" section. Click the clipboard to copy the commands.

5. Return to your SSH window and run the commands you copied from GitHub.

 &nbsp; <code>git remote add origin <your GitHub repo URL></code>
  
 &nbsp; <code>git push -u origin master</code>

Note You will be prompted to log in. Use your GitHub credentials.

-The first command adds the local repository to your GitHub repository.

-The second command pushes your local repo to GitHub.

# Push a branch to GitHub 

Pushing the commit in your branch to your new GitHub repo allows other people to see the changes you've made (think code review). The repository's owner can review changes prior to merging to the master branch.

1. Run the following command to push changes onto a new branch on GitHub, replacing branch name with a name of your branch. Does GitHub automatically create the branch for you on the remote repository?

 &nbsp; <code>git push origin <your branch name> </code>

2. In GitHub, click on the Code tab. You should now see the branch name you just pushed.

3. Click the Compare & pull request button that is next to your branch name.

4. You'll now see the name of your commit. In a production environment you could leave a comment about this commit. For this lab click Create pull request.

5. GitHub verifies that the files you are adding aren't in conflict with the Master copy. If everthing checks out, and it should since these are new files, you will see a green check mark. Click Merge pull request, then Confirm merge.

6. You'll see a "Pull request successfully merged and closed" message. At this point you can click Delete branch to clean up. You don't have to do this, but you may end up with a mess if you have too many branches. Notice that you'll have another chance to leave comments.

# Update a file 

You have added new files to your repo. Now go back to your SSH window to edit one of those files, then commit that file to GitHub. This will show you how GitHub manages changes.

1. Back in your SSH window, switch to the Master branch and review the files it has:

 &nbsp; <code>git checkout master</code>

 &nbsp; <code>ls </code>

2. Now create and name a new branch for the work you're about to do:
 
 &nbsp; <code>git checkout -b <new branch name> </code>

3. Edit it one of your files: 

 &nbsp; <code>pico <file name>.txt </code>

4. Type some content into the .txt file, then save it.

5. Add the file to the staging environment:

 &nbsp; <code>git add <file name>.txt </code>

6. Now commit this change to GitHub:

 &nbsp; <code>git commit -m <new comment> </code>

7. Push this branch:

 &nbsp; <code>git push origin <new branch name> </code>

# Create a Pull Request

Now that you have added your updates, you need to notify a repo's owner that you want to make changes to their files through a pull request. A pull request (PR) allows them to review your changes to make sure it looks good before putting your changes on the master branch (which are documentation updates in this use case, but could also be code changes or any number of other cases).

Since you are the sole owner of your repo for this lab, you don't have to create a PR to merge your changes, but it's a good idea to create one anyway to track the history of your updates.

Create your PR in GitHub

1. Return to your GitHub window.

2. Open a pull request by clicking the Pull requests tab, then New pull request. GitHub_pull_request.png

3. In the Compare and review section, click on your branch name.

4. You'll be shown what changed in the file that you're adding to Master. Click Create pull request

5. You'll see the name of the second commit you created. Now click Create pull request.

6. GitHub verifies that your changes are good. Click the Merge pull request to add your changes into the master branch. Click Confirm merge.

<code >Is the button gray? Probably not right now. When this button is gray, you have a merge conflict. A change in one file conflicts with a change in another, and git can't decide which one is correct. If you have a merge conflict, you have to tell git which version to use. </code>

<b>Clean up and verification </b>

1. Clean up after yourself by deleting your branch, click the Delete branch button.

2. Double check that your commits were merged by clicking the Commits link on the first page of your new repo.

3. Find your commit.

4. Notice the hash code of the commit.

<code>It's worth mentioning The hash code is unique for the specific commit. It's useful for identifying specific commits when you're reviewing (and maybe undoing) changes with the git revert command: git revert <hash code number> You don't need to run this command now. </code>
  
# Sync your local project with GitHub 

Right now, the commit that you made in your branch then merged into the master branch doesn't exist in the version of Master on your local machine. Time to update your local version of Master.

1. Use the git pull origin master command (specific to the master branch) to get the most recent changes from GitHub to your local repo.

 &nbsp; <code>git pull origin master </code>
 
2. Use the git log command to see all new commits.

 &nbsp; <code>git log </code>

3. Switch back to the master branch in your remote session. Use the git checkout master command:

 &nbsp; <code>git checkout master </code>

4. If you see the warning "Your branch is behind....", this means your local branch needs to add the commits from GitHub Master. Run the following:

 &nbsp; <code>git checkout master </code>

5. Then run the following to confirm everything is synced:

 &nbsp; <code>git pull origin master </code>

6. You should see a message that confirms your local repository is now up to date.

# Additional Resources:

 &nbsp; https://git-scm.com/book/en/v2/Getting-Started-Instal
 
