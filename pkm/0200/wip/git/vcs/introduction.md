# Introduction to Version Control System

## Theory
- Version Control System is also known as Software Configuration Management (SCM) or Source Code Management (SCM) System.
- Version control system always talks about files which contain source code.
- Everyone required version control system to maintain different versions of their document.
    - Tester : To maintain different versions of test script
    - Architect : To maintain different versions of Documents
    - Project Manager : To maintain different versions of Excel sheets

## Need

### Issue
<pre class="mermaid">
stateDiagram
direction LR
    [*] --> Code#nbsp;1 
    Code#nbsp;1 --> Client#nbsp;Demo#nbsp;1
    Client#nbsp;Demo#nbsp;1 --> Code#nbsp;2 : Client Changes
    Code#nbsp;2 --> Client#nbsp;Demo#nbsp;2  
    Client#nbsp;Demo#nbsp;2 --> Code#nbsp;3 : Client Changes
    Code#nbsp;3 --> Client#nbsp;Demo#nbsp;3
    Client#nbsp;Demo#nbsp;3 --> ???? : Client Wants Code 1
    ???? --> Code#nbsp;1.1 : Trying to remember what I changed
</pre>

So we can solve the issue of **Trying to remember what I changed** in one of the following 2 ways
- We should not overwrite our code, if required, we have to store every version.
- We use a Version Control System.

### Way 1 (Why not Efficient ?)
- Maintaining multiple versions manually is very complex activity.
- Dev-A and Dev-B working on the code. At last we have to merge the code developed by both developers and we have to deliver to the client. If both developers developed a file named with utility.py, then one copy will overwrite with another copy, which creates abnormal behavior.
- Parallel development will be very difficult.
- Difficult to merge code.

### Way 2 (Practical and in Use)
- We can maintain different versions and we can choose any version based on client requirement
- Every change can be tracked and maintained along with the metadata 
    - why changes are made
    - who did the change
    - when the changes are made
    - which changes are made
- Developers can share their code to peer developers, so that multiple developers can work in collaborative way.
- Parallel development would be very easy as well as the code merging.
- We can provide access control like
    -  who can read code
    -  who can modify code

## Basic Terminology

### Diagram
![Insert Diagram here]()

### Working Directory
- It is just a simple folder in our system.
- This is where developers are required to create/modify files.
- Here version control is not applicable. Here we won't use the word like version-1, version2 etc

### Repository
- This is where we have to store files and metadata.
- Here version control is applicable.
- Here we can talk about versions like version-1, version-2 etc

### Commit
- The process of sending files from working directory to the repository.

### Checkout
- The process of sending files from repository to working directory.

## Types
- There are 2 types of VCSs
    1. Centralized Version Control System
    2. De Centralized/Distributed Version Control System

### Centralized

#### Theory
- This type of VCS contains only one central repository and every developer should be connected to that repository.
- If 4 developers are there, still we have only one repository.
- CVS, SVN, Perforce, TFS, Clearcase are some of the example of Centralized VCS.

#### Diagram
![Insert Diagram here]()

#### Limitation
- Central Repository is the only place where everything is stored, which causes **single point of failure**. If something goes wrong to the central repository then recovery is very difficult.
- All commit and checkout operations should be performed by connecting to the central repository via network. If network outage, then no version control to the developer. i.e in this type, developer work space and remote repository server should be connected always.
- All commit and checkout operations should be performed by connecting to the central repository via network and hence these operations will become slow, which causes performance issues. No local operations and every version control operation should be remote operation.
- Organization of central repository is very complex if number of developers and files increases.

### DeCentralized / Distributed

#### Theory
- The repository is distributed and every developers workspace contains a local copy of the repository. There is no concept of central repository.
- If 4 developers are there then 4 repositories will be there.

#### Diagram
![Insert Diagram here]()

#### Benefit
- The checkout and commit operations will be performed locally. Hence performance is more.
- To perform checkout and commit operations network is not required. Hence if there is any network outage, still version control is applicable.
- If something goes wrong to any repository there is a chance to recover. There is no question of single point of failure.
- To perform push and pull operations network must be required, but these operations are not most common operations and we are performing very rarely.

#### Key points
- **commit** and **checkout** operations will be performed between workspace and repository.

    <pre class="mermaid">
    stateDiagram
    direction LR
        workspace --> local#nbsp;repository
        local#nbsp;repository --> workspace
    </pre>

- **push** and **pull** operations will be performed between repositories.

    <pre class="mermaid">
    stateDiagram
    direction LR
        Dev#nbsp;A#nbsp;Repo --> Dev#nbsp;B#nbsp;Repo
        Dev#nbsp;B#nbsp;Repo --> Dev#nbsp;A#nbsp;Repo
    </pre>

### DeCentralized VCS with Remote Repository

#### Theory
- Remote Repository is not Central Repository.
- The main job of remote repository is just to share our work to peer developers.
- Every developer has his own local copy of repository. This model is not centralized and it is distributed.
- High availability, Speed and there is no single point of failure are main reasons for popularity of this model.
- **Git**, Mercurial, Fossil are few of the DeCentralized VCS with Remote Repository.

#### Diagram
![Insert Diagram here]()