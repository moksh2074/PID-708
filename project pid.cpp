#include <stdio.h>
int mainpage();
int am();
int em();
int smm();
int cm();
int seo();
int mainpage()
{
    int choice;
    pass:
    printf("1.Affiliate Marketting\n");
    printf("\n");
    printf("2.Email Marketting\n");
    printf("\n");
    printf("3.Social Media Marketting\n");
    printf("\n");
    printf("4.Content Marketting\n");
    printf("\n");
    printf("5.Search Engine Optimisation\n");
    printf("\n");
    printf("6.Exit");
    printf("\n");
    printf("Enter your Choice:");
    scanf("%d",&choice);
    printf("\n");

     switch(choice)
    {
        case 1: am();
                goto pass;
                break;
        case 2: em();
                 goto pass;
                 break;
        case 3: smm();
                goto pass;
                break;
        case 4: cm();
                break;
        case 5: seo();
                goto pass;
                break;
        case 6:  exit(0);
        default: printf("wrong choice");
       
    }
 
}

int am(){
    int a;
    printf("1.Know about the course\n");
    printf("1.Know about the duration for course");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Affiliate marketing is a marketing scheme in which a company compensates partners for business created from the affiliate's \n marketing tactics.Digital marketing, analytics, and cookies have made affiliate marketing a billion-dollar industry.Firms \n typically pay affiliates per sale and less frequently by clicks or impressions.The three main types of affiliate marketing are unattached\n affiliate marketing, involved affiliate marketing, and related affiliate marketing.");
   
    }
    else{
        printf("1.40 days--rs1000");
        printf("2. 80 days--rs1400");
        printf("3. 150 days--1800");
    }
}
int em(){
    int b;
    printf("1.Know about the course\n");
    printf("1.Know about the duration for course");
    scanf("%d",&b);
    if(b==1)
    {
        printf("Email marketing is a powerful marketing channel, a form of direct marketing as well as digital marketing, that uses\n email to promote your business’s products or services. It can help make your customers aware of your latest items or offers \n by integrating it into your marketing automation efforts. It can also play a pivotal role \n in your marketing strategy with lead generation, brand awareness, building relationships or keeping customers\n engaged between purchases through different types of marketing emails.A brief history of emailThe very first email\n was sent in 1971 by a computer engineer named Ray Tomlinson. The message he sent was just a string\n of numbers and letters, but it was the beginning of a new era of communication. Tomlinson was also the person who\n introduced the usage of the “@” symbol in email addresses.In 1978, a marketing manager\n at Digital Equipment Corp named Gary Thuerk used this new method of direct communication\n to send out the first commercial email to let people know about a new product.");
   
    }
    else{
        printf("1.40 days--rs1000");
        printf("2. 80 days--rs1400");
        printf("3. 150 days--1800");
    }
}
int smm(){
    int c;
    printf("1.Know about the course\n");
    printf("1.Know about the duration for course");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Social media marketing (SMM) (also known as digital marketing and e-marketing) is the use of social media—the platforms on which users\n build social networks and share information—to build a company's brand, increase sales, and drive website traffic.\n In addition to providing companies with a way to engage with existing customers and reach new ones, social media marketing (SMM) has purpose\n-built data analytics that allow marketers to track the success of their efforts and identify even more ways to engage.\nWhy Is Social Media Marketing So Powerful?The power of social media marketing (SMM) is driven by the unparalleled capacity of social media in three core marketing areas: connection\n, interaction, and customer data.Connection: Not only does social media enable businesses to connect with customers in ways that were previously\n impossible, but there is also an extraordinary range of avenues to connect with target audiences—from content platforms (like YouTube) and social sites (like Facebook) to \nmicroblogging services (like Twitter).");
   
    }
    else{
        printf("1.40 days--rs1000");
        printf("2. 80 days--rs1400");
        printf("3. 150 days--1800");
    }
}
int cm(){
    int d;
    printf("1.Know about the course\n");
    printf("1.Know about the duration for course");
    scanf("%d",&d);
    if(d==1)
    {
        printf("Content marketing is a marketing strategy used to attract, engage, and retain an audience by creating and sharing relevant\n articles, videos, podcasts, and other media. This approach establishes expertise, promotes brand awareness, and keeps your business top\n of mind when it’s time to buy what you sell\n.A content marketing strategy establishes your brand as a thought leader, boosting trust among your audience by creating and distributing\n content in various ways. Content marketing is a type of inbound marketing that attracts customers and builds loyalty, making it \neffective for customer retention.");
   
    }
    else{
        printf("1.40 days--rs1000");
        printf("2. 80 days--rs1400");
        printf("3. 150 days--1800");
    }
}
int seo(){
    int e;
    printf("1.Know about the course\n");
    printf("1.Know about the duration for course");
    scanf("%d",&e);
    if(e==1)
    {
        printf("SEO stands for “search engine optimization.” In simple terms, it means the process of improving your site to increase its visibility \nwhen people search for products or services related to your business in Google, Bing, and other search engines. The better visibility your pages have in search results,\n the more likely you are to garner attention and attract prospective and existing customers to your business.\nHow does SEO work?Search engines such as Google and Bing use bots to crawl pages on the web, going from site to site, collecting information about those pages\n and putting them in an index. Think of the index like a giant library where a librarian can pull up a book (or a web page) to help you find \nexactly what you’re looking for at the time.Next, algorithms analyze pages in the index, taking into account hundreds of ranking factors or \nsignals, to determine the order pages should appear in the search results for a given query. In our library analogy,\n the librarian has read every single book in the library and can tell you exactly which one will have the answers to your questions.");
   
    }
    else{
        printf("1.40 days--rs1000");
        printf("2. 80 days--rs1400");
        printf("3. 150 days--1800");
    }
}
int main()
{
    char id[50];

  User:

  printf ("Enter your id:");

  scanf ("%s", &id);

  if (strcmp (id, "moksh") == 0)

    {

      printf ("Id is correct\n");

    }

  else

    {

      printf ("You have enetred an invalid user id\nPlease enter id again\n");

      goto User;

    }

  char pass[50];

pass:

  printf ("Enter your password: ");

  scanf ("%s", &pass);

  if (strcmp (pass, "1234") == 0)

    {

      printf ("You have successly logged \n");
      printf("\n");
      mainpage();

    }

  else

    {

      printf("You have entered a wrong password\nEnter your password again\n");

      goto pass;

    }

    return 0;
}

