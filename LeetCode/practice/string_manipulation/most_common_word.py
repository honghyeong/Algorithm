# 819

# Using Counter, regular expression, list comprehension

class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        # extraction lower words from paragraph
        words=[word for word in re.sub('[^\w]',' ',paragraph).lower().split() if word not in banned]

        # using Counter, return a most common word
        counts=Counter(words)
        return counts.most_common(1)[0][0]
