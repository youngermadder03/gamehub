<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>My Game Hub</title>
    <style>
        /* A little bit of CSS to make it look like a real site */
        body { font-family: sans-serif; text-align: center; background-color: #f4f4f4; }
        .container { display: flex; justify-content: center; gap: 20px; padding: 20px; }
        .game-card { background: white; padding: 20px; border-radius: 10px; box-shadow: 0 4px 8px rgba(0,0,0,0.1); width: 300px; }
        button { background-color: #28a745; color: white; border: none; padding: 10px 20px; cursor: pointer; border-radius: 5px; }
        button:hover { background-color: #218838; }
    </style>
</head>
<body>

    <header>
        <h1>Welcome to My Game Hub</h1>
        <p>Check out my latest projects and download them below!</p>
    </header>

    <main class="container">
        <div class="game-card">
            <h2>Game Title 1</h2>
            <p>Short description of what makes this game awesome.</p>
            <a href="your-game-file.zip" download>
                <button>Download (.zip)</button>
            </a>
        </div>

        <div class="game-card">
            <h2>Game Title 2</h2>
            <p>Another cool game description goes here.</p>
            <a href="another-game.zip" download>
                <button>Download (.zip)</button>
            </a>
        </div>
    </main>

    <footer>
        <p>&copy; 2026 My Gaming Studio</p>
    </footer>

</body>
</html>
