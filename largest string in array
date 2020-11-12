public class LongestStringInStringArray {

  public static String getLongestString(String[] array) {
      int maxLength = 0;
      String longestString = null;
      for (String s : array) {
          if (s.length() > maxLength) {
              maxLength = s.length();
              longestString = s;
          }
      }
      return longestString;
  }

  public static void main(String[] args) {
      String[] topps = {"Chess", "Pepper", "lives"};
      String longestString = getLongestString(topps);
      System.out.println("longest string: '%s'\n", longestString);
  }

}
