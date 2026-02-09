# 🔧 Git Commands Quick Reference

## Your Daily Git Workflow (Do this EVERY day after coding!)

```bash
# 1. Check what you changed
git status

# 2. Add all changes
git add .

# 3. Commit with a descriptive message
git commit -m "Day X: Description of what you did"

# 4. Push to GitHub
git push origin main
```

---

## Essential Git Commands

### First-Time Setup (Do once)

```bash
# Set your name (shows on commits)
git config --global user.name "Your Name"

# Set your email (shows on commits)
git config --global user.email "your.email@example.com"
```

### Clone a Repository

```bash
# Download a repo from GitHub
git clone https://github.com/username/repo-name.git
```

### Check Status

```bash
# See which files changed
git status

# See detailed changes
git diff
```

### Staging & Committing

```bash
# Add specific file
git add filename.cpp

# Add all files
git add .

# Commit with message
git commit -m "Your message here"

# Add and commit in one step
git commit -am "Your message"
```

### Push & Pull

```bash
# Send commits to GitHub
git push origin main

# Get latest changes from GitHub
git pull origin main
```

### Viewing History

```bash
# See commit history
git log

# See history (one line per commit)
git log --oneline

# See last 5 commits
git log -5
```

### Undoing Mistakes

```bash
# Unstage a file (undo git add)
git restore --staged filename.cpp

# Discard changes in a file (CAREFUL - can't undo!)
git restore filename.cpp

# Undo last commit (keep changes)
git reset --soft HEAD~1

# See what would be deleted
git clean -n

# Delete untracked files (CAREFUL!)
git clean -f
```

---

## Common Situations

### "I forgot to add a file to my last commit"

```bash
git add forgotten-file.cpp
git commit --amend --no-edit
```

### "I made a typo in my commit message"

```bash
git commit --amend -m "Correct message"
```

### "I want to see what's on GitHub vs my local"

```bash
git fetch
git log HEAD..origin/main
```

### "Help! I got a merge conflict"

1. Open the conflicting file
2. Look for `<<<<<<< HEAD` and `>>>>>>> origin/main`
3. Edit to keep what you want
4. Remove the conflict markers
5. `git add` the file
6. `git commit`

---

## Git Best Practices

✅ **DO:**
- Commit often (multiple times per coding session)
- Write clear commit messages
- Pull before you push
- Test your code before committing

❌ **DON'T:**
- Commit broken code
- Use vague messages like "stuff" or "idk"
- Commit large binary files (use .gitignore)
- Force push to main branch

---

## Sample Commit Messages

Good examples:
- `"Day 1: Hello World and greeting program"`
- `"Fix: Bug in calculator division by zero"`
- `"Add: Temperature converter program"`
- `"Update: Improved input validation"`

Bad examples:
- `"update"`
- `"asdf"`
- `"more stuff"`
- `"idk what I did lol"`

---

## VS Code Git Integration

VS Code has Git built-in! You can:

1. **Source Control panel** (left sidebar, third icon)
2. **Stage files** by clicking the + icon
3. **Commit** by typing message and clicking checkmark
4. **Push** by clicking the sync icon

But I recommend learning Terminal commands first - it's more powerful and you'll understand what's happening!

---

*Pro tip: Type `git` in terminal to see all available commands!*
