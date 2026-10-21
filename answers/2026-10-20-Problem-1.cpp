
int searchRotated(const std::vector<int>& values, int target) {
  int left = 0;
  int right = values.size() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (values[mid] == target) return mid;

    // left part sorted
    if (values[left] < values[mid]) {
      // target value in left half
      if (values[left] <= target && target < values[mid]) {
        // search left
        right = mid - 1;
      }
      // search right
      else {
        left = mid + 1;
      }
    }
    // right part sorted
    else {
      // target value in right half
      if (values[mid] < target && target <= values[right]) {
        // search right
        left = mid + 1;
      }
      // search left
      else {
        right = mid - 1;
      }
    }
  }

  return -1;
}
