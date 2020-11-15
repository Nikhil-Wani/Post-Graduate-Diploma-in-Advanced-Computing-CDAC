package in.cdac.beans;

public class Book {
   private int bookid;
   private String bookname;
   private String author;
   private String publisher;
   private int yearpublished;
   
    public int getBookid() {
        return bookid;
    }

    public String getBookname() {
        return bookname;
    }

    public String getAuthor() {
        return author;
    }

    public String getPublisher() {
        return publisher;
    }

    public int getYearpublished() {
        return yearpublished;
    }
   

    public void setBookid(int bookid) {
        this.bookid = bookid;
    }

    public void setBookname(String bookname) {
        this.bookname = bookname;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public void setPublisher(String publisher) {
        this.publisher = publisher;
    }

    public void setYearpublished(int yearpublished) {
        this.yearpublished = yearpublished;
    }
}
