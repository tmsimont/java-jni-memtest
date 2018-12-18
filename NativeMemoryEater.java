class NativeMemoryEater {
  static {
    System.loadLibrary("eat");
  }

  private long eaterPointer;
  private int nativeEaten = 0;

  private native void eatMemory();
  private native void freeMemory();
  private native void getEater();
  private native void destroyEater();

  public NativeMemoryEater() {
    getEater();
  }

  public void eat() throws Exception {
    System.out.println("eating native memory...");
    eatMemory();
    nativeEaten++;
    System.out.println("have eaten " + nativeEaten + " gigs");
  }

  public void uneat() throws Exception {
    if (nativeEaten > 0) {
      System.out.println("un-eating...");
      freeMemory();
      nativeEaten--;
    }
    else {
      System.out.println("must eat first");
    }
  }

  public void destroy() throws Exception {
    System.out.println("destroy... then sleep");
    destroyEater();
    Thread.sleep(1000);
    System.out.println("wakey wakey");
  }
}
