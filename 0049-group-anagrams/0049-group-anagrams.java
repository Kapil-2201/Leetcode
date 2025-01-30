class Solution {
    public boolean isAnagram(String s1, String s2) {
        if (s1.length() != s2.length())
            return false;
        int[] map = new int[26];
        for (int i = 0; i < s1.length(); i++) {
            map[s1.charAt(i) - 'a']++;
            map[s2.charAt(i) - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (map[i] != 0)
                return false;
        }
        return true;
    }

    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> group = new ArrayList<>();
        boolean[]visited = new boolean[strs.length];
        for (int i = 0; i < strs.length; i++) {
            if (visited[i]) continue;
            List<String> list = new ArrayList<>();
            list.add(strs[i]);
            visited[i] = true;
            for (int j = i+1; j < strs.length; j++) {
                if (!visited[j] && isAnagram(strs[i], strs[j])) {
                    // list.add(strs[i]);
                    list.add(strs[j]);
                    visited[j] = true;
                }
            }
            group.add(list);
        }
        return group;

    }
}