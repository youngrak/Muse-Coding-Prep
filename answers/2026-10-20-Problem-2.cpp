std::string firstUniqueCode(const std::vector<std::string>& codes) {
  unordered_map<std::string, unsigned int count> code_count;
  for (const std::string& code : codes) {
    code_count[code]++;
  }
  for (const std::string& code : codes) {
    if (code_count[code] == 1) {
      return code;
    }
  }
  return "";
}
