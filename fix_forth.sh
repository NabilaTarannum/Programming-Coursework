#!/usr/bin/env bash
# Rename every "Forth" to "Fourth" (folders and files), then fix the one import that used the old name.
set -e
# 1) rename files first, then folders (deepest first), keeping git history
git ls-files | grep -i 'forth' | while IFS= read -r f; do
  new="$(dirname "$f")/$(basename "$f" | sed 's/forth/fourth/; s/Forth/Fourth/')"
  git mv "$f" "$new"
done
find . -depth -type d -not -path './.git*' -iname '*forth*' | while IFS= read -r d; do
  new="$(dirname "$d")/$(basename "$d" | sed 's/forth/fourth/; s/Forth/Fourth/')"
  [ "$d" != "$new" ] && git mv "$d" "$new"
done
# 2) update the text inside the Python file that imports Forth_Module_1
sed -i.bak 's/Forth_Module/Fourth_Module/g' "Phitron/PYTHON/Week 02/Fourth_Module/Fourth_Module_5.py"
rm -f "Phitron/PYTHON/Week 02/Fourth_Module/Fourth_Module_5.py.bak"
git add -A
git commit -m "Fix spelling: Forth -> Fourth in folder and file names"
echo "Done."
