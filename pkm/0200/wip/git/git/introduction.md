# Introduction to GIT

## Theory
- Git and Github both are not same.
- Git is Distributed Version Control System Tool.
- It is installed in Client Machine.
- Git is not acronym and hence no expansion. But most of the people abbreviated as "Global Information Tracker".
- Git is developed by **Linus Torvalds** (Finnish software engineer), who also developed Linux Kernel.
- Most of the companies like Microsoft, Facebook, Yahoo, LinkedIn, Intel using Git as Version Control System Tool.

## Features of GIT

- It is a Distributed VCS. So all the advantages of Distributed VCS comes with it.

- **Staging Area**
    - In Git, we cannot commit the files of working directory directly. First we have to add to the staging area and then we have to commit. Hence in Git, commit is a 2 Step process.
    - This is a logical layer / virtual layer in git between working directory and local repository.
    - This is a logical layer, so we can not see it.

        <pre class="mermaid">
        stateDiagram
        direction LR
            Working#nbsp;Directory --> Staging#nbsp;Area
            Staging#nbsp;Area --> Local#nbsp;Repository
        </pre>
    
    - This staging area is helpful to double check/cross-check our changes before commit.
    - This type of layer is not available in other Version Control System Tools like CVS, SVN etc
    - Git stores files in repository in some hash form, which saves space. It uses internally snapshot mechanism for this. All these conversions and taking snapshots of our data will be happened in staging area before commit.
    - Due to this Git could save a lot of storage space. For example, If a sample repository takes around 12 GB space in SVN where as in GIT it takes hardly 420 MB. Hence Staging Area is the most important Strength of GIT.

- **Branching and Merging**
    - We can create and work on multiple branches simultaneously and all these are branches are isolated from each other. It enables multiple work flows.
    - We can merge multiple branches into a single brach. We can also commit branch wise.
        <pre class="mermaid">
        gitGraph
        commit
        commit
        branch develop
        checkout develop
        commit
        commit
        checkout main
        merge develop
        commit
        commit
        </pre>

- Freeware and Open Source
- It provides support for multiple platforms

## GIT Architecture

### Theory

- GIt contains 2 types of repositories:
    1. Local Repository
    2. Remote Repository

#### Steps
- For every developer, a separate local repository is available. Developer can perform all checkout and commit operations to local repository only.
- To perform commit operation, first files needs to be added to staging area by using `git add` command, and then commit can be performed to the local repository by using `git commit` command. Hence commit in GIT is a 2-step process.
    - commit is applicable only for staging area files but not for working directory files.
- For code sharing with to the peer developers then the code needs to be pushed from local repository to the remote repository by using `git push` command.
    - Remote repository contains total project code, which can be accessible by all developers.
- `git pull` VS `git clone`
    - Existing developers can get updates from the remote repository to the local repository by using `git pull` command. `git pull` command brings only the delta present between the remote repository and local repository.
    - New developer can get local repository by cloning remote repository. For this we have to use `git clone` command.

### Diagram

<pre class="mermaid">
sequenceDiagram
    Working#nbsp;Directory   ->>     Staging#nbsp;Area : git add
    Staging#nbsp;Area    ->>    Local#nbsp;Repository : git commit
    Local#nbsp;Repository ->> Remote#nbsp;Repository : git push
    Remote#nbsp;Repository ->> Local#nbsp;Repository : git pull / git clone
</pre>