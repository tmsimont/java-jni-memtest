import java.util.Scanner;

class CLI { 
  private NativeMemoryEater nme = new NativeMemoryEater();
  private JavaMemoryEater jme = new JavaMemoryEater();

  public void eatOnCommand() throws Exception {
    Scanner sc = new Scanner(System.in);
    while(true) {
      System.out.println("hungry.. what to eat?");
      System.out.println(" (nat/fin/unnat/unheap/heap)");
      String given =  sc.nextLine();
      if (given.contains("unnat")) {
        System.out.println("uneating... natives");
        nme.uneat();
      } else if (given.contains("fin")) {
        System.out.println("all done");
        nme.destroy();
        return;
      } else if (given.contains("nat")) {
        System.out.println("eat natives!");
        nme.eat();
      } else if (given.contains("unheap")) {
        System.out.println("uneating... heap");
        jme.uneat();
      } else {
        System.out.println("eat heaps!");
        jme.eat();
      }
    }
  }

  public static void main(String[] args) throws Exception {
    new CLI().eatOnCommand();
  }
}
