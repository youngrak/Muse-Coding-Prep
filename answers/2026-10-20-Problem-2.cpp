std::string firstUniqueCode(const std::vector<std::string>& codes) {
  std::string first_unique_code = "";
  unordered_map<std::string, unsigned int count> map;
  for (unsigned int i = 0 ; i < codes.size() ; i++) {
    map[codes[i]]++;
  }
  for (unsigned int j = 0 ; j < map.size() ; j++) {
    if (map[j].second == 1) {
      return map[j].first;
    }
  }
  return "";
}
