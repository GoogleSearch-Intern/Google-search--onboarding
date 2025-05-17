# 🛠️ How to Submit a Pull Request (PR)

Welcome! This is your complete guide for submitting tasks through GitHub Pull Requests (PRs), the async workflow used at Google.

You’ll use this method to submit each task in your onboarding repository.

---

## ✅ Step-by-Step: PR Workflow

---

### 1. Fork and Clone the Repository

Start by forking the onboarding repo to your own GitHub account.

1. Go to:  
   https://github.com/GoogleSearch-Intern/google-search--onboarding

2. Click the **"Fork"** button (top-right)

3. Then clone your forked repo to your machine:

```bash
git clone https://github.com/your-username/google-search--onboarding.git
cd google-search--onboarding


 2. Create a New Branch for Your Task
For each task, use a new branch. Name it clearly:

git checkout -b arya/dayX-taskname

✅ One task = one branch



3. Make Your Changes
Edit or add the files needed for your task:

Add content to arya_intro.md
Fix tools/search_tool.cpp
Create files in the docs/ folder



4. Stage and Commit Your Work
After saving your changes:

git add .
git commit -m "feat: completed Day 3 bugfix"

Commit message format tips:

feat: – new feature or task
fix: – bug fixes or corrections
docs: – writing or updating documentation



5. Push Your Branch to GitHub
Push the branch to your fork:
git push origin arya/dayX-taskname


6. Open a Pull Request (PR)
Go to your fork on GitHub
(e.g., https://github.com/arya-user/google-search--onboarding)
GitHub will show a “Compare & pull request” button — click it
On the PR page:
Base repo: GoogleSearch-Intern/google-search--onboarding
Base branch: main
Compare branch: your branch (e.g., arya/day3-bugfix)
Add a descriptive title:
feat: complete Day 3 bugfix and add bugfix_log.md




7. Assign Sakshi as Your Reviewer
On the right-hand side of the PR page:

Under Assignees, select @sakshijain
This will notify Sakshi to review your work.




8. Make Edits if Requested
If Sakshi asks for changes:

Edit the same files locally
Add and commit again:
git add .
git commit -m "fix: addressed review feedback"
git push origin arya/dayX-taskname

✅ Your pull request will automatically update. No need to open a new one.







Best Practices

Always create a new branch for each task
One PR per task keeps things clean
Ask for help early if you're stuck
Keep PRs simple, small, and well-labeled
Keep your Chat thread active and async!





You're now ready to submit your internship tasks like a Googler! 🚀
