//
//  ContentView.swift
//  RPS
//
//  Created by Chirath Kumarasiri on 5/2/20.
//  Copyright © 2020 Chirath Kumarasiri. All rights reserved.
//

import SwiftUI

enum RPS: String {
    case Rock = "🤘"
    case Paper = "📄"
    case Scissor = "✂️"
}

extension String {
    func image() -> UIImage? {
        let size = CGSize(width: 40, height: 40)
        UIGraphicsBeginImageContextWithOptions(size, false, 0)
        UIColor.white.set()
        let rect = CGRect(origin: .zero, size: size)
        UIRectFill(CGRect(origin: .zero, size: size))
        (self as AnyObject).draw(in: rect, withAttributes: [.font: UIFont.systemFont(ofSize: 40)])
        let image = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()
        return image
    }
}

struct EmojiText : View {
    var emojiString: String
    
    var body: some View {
        
        Text(emojiString)
            .frame(width: 200, height: 200, alignment: .center)
            .font(.system(size: 100))
            .background(Color.black)
        }
}

struct ContentView: View {
    let moves = [RPS.Rock, RPS.Paper, RPS.Scissor]
    
    @State private var playerMove = RPS.Rock
    @State private var computerMove = RPS.Rock
    
    @State private var playerScore = 0
    @State private var computerScore = 0
    
    @State private var playerWon = false
    @State private var computerWon = false
    
    @State private var showingAlert = false
    @State private var roundNumber = 1
    @State private var result = "Result"
    
    var body: some View {
        ZStack {
            
            LinearGradient(gradient: Gradient(colors: [.blue, .black]), startPoint: .top, endPoint: .bottom)
                       .edgesIgnoringSafeArea(.all)
            VStack {
                Text("Rock Paper Scissors")
                .font(.largeTitle)
            
                ScrollView (.horizontal, showsIndicators: false) {
            
                    HStack (spacing: 20){
                        
                        ForEach(0 ..< 3) { number in
                            Button (action: {
                                self.playerTapped(self.moves[number])
                            }) {
                                EmojiText(emojiString: self.moves[number].rawValue)
//                                Image (uiImage: self.moves[number].rawValue.image()!)
                            }.disabled(self.roundNumber > 9)
                        }
                    }
                }
                
                VStack (spacing: 10){
                    
                    Text("Round Number : \(roundNumber)")
                    .font(.largeTitle)
                    
                    Text("Scores")
                    .font(.largeTitle)
                    
                     HStack (spacing: 20){
                        
                        Text("Your Score : \(playerScore)")
                        Text("Computer Score : \(computerScore)")
                    }
                     .font(.body)
                    
                    Button (action : {
                        self.resetGame()
                    }) {
                        Text("New Game")
                    }
                }
                    
            }
        }
        .alert(isPresented: $showingAlert) {
            
            if roundNumber == 10 {
                
                return Alert (title: Text(self.result),
                              message: Text("You : \(playerMove.rawValue) - Computer : \(computerMove.rawValue)\nDo you want to start a new game ?"),
                              primaryButton: .default(Text("Yes")) {
                                self.resetGame() },
                              secondaryButton: .default(Text("No")))
            } else {
                
                return Alert (title: Text(self.result), message: Text("You : \(playerMove.rawValue) - Computer : \(computerMove.rawValue)"), dismissButton: .default(Text("Done")) {
                    self.computerPlay()
                    })
            }
            
        }
    }
    
    func playerTapped(_ playerMove: RPS) {
        
        self.playerMove = playerMove
        
        self.playerWon = false
        self.computerWon = false
        self.result = ""

        if playerMove == self.computerMove {
            self.result = "Draw"
            
        } else {
            
            if playerMove == RPS.Rock {
                
                if self.computerMove == RPS.Scissor {
                    playerWon = true
                } else if self.computerMove == RPS.Paper {
                    computerWon = true
                }
            }
            
            else if playerMove == RPS.Scissor {
                
                if self.computerMove == RPS.Paper {
                    playerWon = true
                } else if self.computerMove == RPS.Rock {
                    computerWon = true
                }
            }
            
            else if playerMove == RPS.Paper {
                
                if self.computerMove == RPS.Rock {
                    playerWon = true
                } else if self.computerMove == RPS.Scissor {
                    computerWon = true
                }
            }
        }
        
        if playerWon {
            playerScore += 1
            self.result = "You Won"
        } else if computerWon {
             computerScore += 1
            self.result = "Computer Won"
        } else {
            self.result = "Draw"
        }
        
        showingAlert = true
        roundNumber += 1
    }
    
    func computerPlay() {
        
        if roundNumber <= 10 {
            self.computerMove = self.moves[Int.random(in: 0...2)]
        } else {
            self.result = "Game Over"
            showingAlert = true
        }
    }
    
    func resetGame() {
        
        self.playerScore = 0
        self.computerScore = 0

        self.roundNumber = 1
    }
}


struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
