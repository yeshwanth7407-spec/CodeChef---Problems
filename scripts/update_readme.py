import os
import re

HEADER = """# CodeChef Problems

My daily CodeChef problem-solving journey.

## Progress

- Problems Solved: {count}

## Problems

| Problem | Rating | Topic | Date |
|---------|--------|-------|------|
"""

rows = []

# Scan the root directory for all .cpp files
for file in sorted(os.listdir(".")):
    if file.endswith(".cpp"):
        with open(file, "r", encoding="utf-8") as f:
            content = f.read()

        # Extract details from the header comments
        title = re.search(r"Title\s*:\s*(.*)", content)
        rating = re.search(r"Rating\s*:\s*(.*)", content)
        topics = re.search(r"Topics\s*:\s*(.*)", content)
        date = re.search(r"Date Solved\s*:\s*(.*)", content)

        t = title.group(1).strip() if title else file
        r = rating.group(1).strip() if rating else "-"
        top = topics.group(1).strip() if topics else "-"
        d = date.group(1).strip() if date else "-"

        rows.append(f"| [{file[:-4]} - {t}](./{file}) | {r} | {top} | {d} |")

# Write the final result back to README.md
with open("README.md", "w", encoding="utf-8") as f:
    f.write(HEADER.format(count=len(rows)))
    f.write("\n".join(rows) + "\n")