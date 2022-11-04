# Adding files
git checkout --orphan latest_branch
git add -A
git add .gitignore

# .gitignore
git rm -r --cached -f ./Demo/*
git rm -r --cached -f ./.idea/*
git rm -r --cached -f ./cmake-build-debug/*

touch .gitignore
truncate -s 0 .gitignore
echo '.idea/*' >> .gitignore
echo 'Demo/*' >> .gitignore
echo 'cmake-build-debug/*' >> .gitignore

# delete previous branch and commit again
git commit -am "everything has been reset"
git branch -D PC
git branch -m PC
git push -f origin PC