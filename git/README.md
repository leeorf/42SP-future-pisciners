
# Git


### Working alone

In case you've never used Git before and don't know how it works, I suggest taking a look on this material:

[Git beginner tutorial (in English)](https://product.hubspot.com/blog/git-and-github-tutorial-for-beginners)

**The scenario**: you are working alone and you have to connect your local machine and you repository on Github.

In this case the project is very simple, we are going to use text files to understand how Git and Github works.

1. Create a folder named `my-first-github-repo` in any place that you want, on your computer
2. Initialize git, create one or more text files and don't forget to `commit` those changes (and please, don't forget about the message)
3. Now push the folder into your Github
4. **And done! You nailed the first part!**

>p.s: If you have any problems, ask for help and me or any other future pisciners will be there to help you
---

### Working with other people

Before you start, I highly recommend to see this material:

[Using Git in the real world (in English)](https://www.theodinproject.com/courses/ruby-programming/lessons/using-git-in-the-real-world)

**The scenario**: You are working in a project already in production, with other developers (you can think as a website that is already online).

In our case we are going to simulate this environment, but only with simple text files.

Think of the `42-SP-future-pisciners` repository as the website repository (in this case we call it `upstream`). What you are going to do is add a new text file (that you are going to create in your computer) to it.

### Initial Setup
1. Fork the original `upstream` repository into your own Github account by using the fork button at the top of the `42-SP-future-pisciners` repository.
2. Clone your forked repository onto your local machine
3. Because you cloned the repository, you've already got a remote that points to `origin`, which is your fork on Github. You will use this to push changes back up to Github. You'll also want to be able to pull directly from the original repository on Github (the `upstream` repository), by setting it up as another remote. Do this by using `git remote add upstream https://github.com/leeorf/42SP-future-pisciners.git` inside the project folder `git`

### Ongoing Workflow
We've got one main branch - `master`. Think of `master` as the production-ready code. Any code deployed to `master` will be tested in staging and shipped to production. You will be working in a feature branch and submitting your pull requests to the `master` branch.
1. Create a new "feature" branch. In our case we are going to create a text file where you are going to introduce yourself. Create the branch using `git checkout -b add_yourname_introduction`
2. Now create a file `introducing_myself.txt` where you must introduce yourself. Done that, `commit` the changes
3. Now we are going to merge our `branch` into `master`. Merge into with `git checkout master` followed by `git merge add_yourname_introduction`
4. Now, you want to send or local version of the `master` branch back up to your `origin` (your fork of the `upstream` repository). You can't send directly to `upstream` because you don't have access, so you will need to make a pull request. Use `git push origin master` to ship `master` up to your fork on Github
5. Finally, submit a pull request to send your forked version of `master` back to the original `upstream` (in this case the `42-SP-future-pisciners` repository). This can be done using Github's interface. You just need to make sure you are sending it back to the `master` branch
6. **Done!! I believe that now you can use Git and Github with no further problems during the piscine**
>p.s: If you have any problems, ask for help and me or any other future pisciners will be there to help you
