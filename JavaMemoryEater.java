import java.util.LinkedList;

class JavaMemoryEater {
  LinkedList<byte[]> eaten = new LinkedList<>();

  public void eat() {
    System.out.println("eating java heap...");
    eaten.add(new byte[1073741824]);// java eat gig
  }

  public void uneat() {
    System.out.println("uneating...");
    eaten.remove(eaten.size() - 1);
    System.out.println("gonna try to gc...");
    System.gc();
    System.out.println("done... no guarantees");
  }
}
