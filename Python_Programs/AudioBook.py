import pyttsx3
import PyPDF2

book=open('J. R. R. Tolkien - The Hobbit-Harper Collins (1991).pdf','rb')
pdfReader=PyPDF2.PdfFileReader(book,strict=False)
pages=pdfReader.numPages
print(pages)


speaker = pyttsx3.init()

for num in range(338,pages):
  page=pdfReader.getPage(338)
  text=page.extractText()
  speaker.say(text)
  speaker.runAndWait()