## Index

- [Introduction to Version Control System](./vcs/introduction)
- [Introduction to GIT](./git/introduction)

- Life Cycle of File in GIT:
    - Untracked
    - Staged
    - In Repository/ Committed
    - Modified

- Git Installation On Windows

- Example-1 To Understand Working Directory, Staging Area and Local Repository

- The 6 Git Commands With Example - init,status,add,commit,log and config

- The complete postmortem of git log command
    - How to see history of all commits in local repository
    - How to see log information of a particular file
        - Option-1 : --oneline option to get brief log information
        - Option-2 : -n option to limit the number of commits to display
        - Option-3 : --grep option to search based on given pattern in commit message
        - Option-4 : Show commits more recent than a specific time.
        - Option-5 : Show commits older than a specific time
        - Option-6 : Show commits based on author
        - Option-7 : --decorate option to display extra information

- The Complete Story of git diff command
    - Case-1  : To see the difference in file content between working directory and staging area
    - Case-2  : To see the difference in file content between working directory and last commit
    - Case-3  : To see the difference in file content between staged copy and last commit
    - Case-4  : To see the difference in file content between specific commit and working directory copy
    - Case-5  : To see the difference in file content between specific commit and staging area copy
    - Case-6  : To see the difference in file content between two specified commits
    - Case-7  : To see the difference in file content between last commit and last but one commit
    - Case-8  : To see the differences in all files content between two specified commits
    - Case-9  : To see the differences in content between two branches
    - Case-10 : To see the differences in content between local and remote repositories

- Helix Visual Merge Tool(p4merge) For Checking Differences

- Removing files by using git rm command
    - Case-1 : To remove files from working directory and staging area(git rm)
    - Case-2 : To remove files Only from staging area (git rm --cached)
    - Case-3 : To remove files Only from Working Directory (rm command)

- Undo changes with git checkout command

- Git References ( master and HEAD )

- Git reset command
    - Utility-1: To remove changes from staging area
    - Utility-2: To undo commits at repository level(--mixed, --soft, --hard modes)

- Git Aliases - Providing our own convenient names to git commands

- Ignoring unwanted files and directories by using .gitignore file

- Any Special Treatment for directories by Git ???

- Branching And Merging
    - What is branching?
    - Need of creating a new branch
    - Various Commands used in branching
        - To view branches
       - To create a new branch
       - To switch from one branch to another branch
       - Short-cut way to create a new branch and switch to that branch
    - Demo Example for branching
    - Multiple use cases where branching is required
    - Advantages of Branching
    - Merging of a Branch
    - What is Fast-forward Merge?
    - What is Three-Way Merge?
    - Differences between Fast-forward and Three-way Merges
    - Merge Conflicts and Resolution Process
    - How to Delete a Branch

- Merging by using Rebase 115
    - Process of rebasing
    - Demo Example for rebasing
    - Advantages of rebasing
    - Disadvantages of rebasing
    - Differences between Merge and Rebase
- Stash in GIT 125
    - What is git stash?
    - Demo Example for stashing
    - How to list all available stashes?
    - How to check the contents of stash?
    - How to perform unstash?
    - Partial Stash
    - How to delete the stash?

- Working with Remote Repositories
    - Need of Remote Repositories
    - How to work with GitHub?
    - How to create account in GitHub?
    - How to create a new repository in Github?
    - How to work with Remote Repository?
        - git remote
        - git push
        - git clone
        - git pull
        - git fetch

- Git Tagging (git Tag Command)
    - Introduction to Tagging
    - Creation of a Light Weight Tag
    - How to delete a tag?
    - Annotated Tags (Tags with Information)
    - How to tag a previous commit?
    - How to update an existing tag?
    - How to compare Tags
    - How to push tags to remote repository?

- git revert Command
    - Need of revert command
    - Demo Example to revert last commit
    - Demo example to revert a particular commit

- Cherry-Picking (git cherry-pick Command)
    - Need of Cherry-Picking
    - Use cases of cherry-pick
    - Demo Example for cherry-picking

- git reflog Command