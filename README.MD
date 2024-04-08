## Table of Content
- [Introduction](#introduction)
- [Overview](#overview)
  - [Problem](#problem)
  - [Contest](#contest)
  - [Script used to Organize](#script-used-to-organize)

# Introduction
Hi! My name is Ivan Lin and I'm currently studying @ RIT. \
I'm not a DSA enthusiast and I'm hoping to become a better programmer via leetcode. \
I have 1 Leetcode accounts:
- [naXVI](https://leetcode.com/naXVI/) (Main Account)


## Script used to Organize
Notice that I have 3 python scripts in the source directory:
1. make.py
2. fetcher.py
3. organizer.py

They are used to create directories for me and add the information into their respective README.MD. In order to also use this, your directory must be in the following format

- Problem (Folder)
  - Easy (Folder)
  - Medium (Folder)
  - Hard (Folder)
  - Temp (Folder)
    - code.cpp (or whatever template you want to put here)
    - README.ME (Optional. Only if you also want to explain)
  - README.MD
    - It must be in the same format as mine.
- Contest (Folder)
  - README.MD
    - It must be in the same format as mine.

You can use the script by:
1. python3 make.py [problem_link]
2. python3 make.py [contest_link]

Examples:
```
python3 make.py https://leetcode.com/problems/subarray-product-less-than-k/description/?envType=daily-question&envId=2024-03-27

python3 make.py https://leetcode.com/problems/two-sum/

python3 make.py https://leetcode.com/problems/two-sum/solutions/
```

There will be 3 possibilities:
1. You've never done such contest/problem, so the script will create the folder for you and have the path copied to your clipboard. What I like to do is just `code [path]` so I can immediately start coding it in my IDE (VSCode).
2. You've already doen such contest/problem, the script will not create extra folder, it will just copy the path to your clipboard.
3. Tell you the link is not good.